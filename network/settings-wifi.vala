
namespace Network.Settings
{
	public class Wifi : MenuModel {
		protected Menu _menu = new Menu();
		protected GLib.SimpleActionGroup actions = new GLib.SimpleActionGroup();
		private GLibLocal.ActionMuxer _muxer;

		construct {
			_menu.items_changed.connect(menu_items_changed);
			_muxer.insert("wifi-settings", actions);
		}

		Wifi (GLibLocal.ActionMuxer muxer)
		{
			_muxer = muxer;
		}

		~Wifi ()
		{
			_muxer.remove("wifi-settings");
		}

		void menu_items_changed (int position, int removed, int added) {
			(this as MenuModel).items_changed(position, removed, added);
		}

		/***********************************
		 * Passing on functions to our menu
		 ***********************************/
		public override GLib.Variant get_item_attribute_value (int item_index, string attribute, GLib.VariantType? expected_type) {
			return (_menu as MenuModel).get_item_attribute_value(item_index, attribute, expected_type);
		}

		public override void get_item_attributes (int item_index, out GLib.HashTable<void*,void*> attributes) {
			(_menu as MenuModel).get_item_attributes(item_index, out attributes);
		}

		public override GLib.MenuModel get_item_link (int item_index, string link) {
			return (_menu as MenuModel).get_item_link(item_index, link);
		}

		public override void get_item_links (int item_index, out GLib.HashTable<void*,void*> links) {
			(_menu as MenuModel).get_item_links(item_index, out links);
		}

		public override int get_n_items () {
			return (_menu as MenuModel).get_n_items();
		}

		public override bool is_mutable () {
			return (_menu as MenuModel).is_mutable();
		}

		public override GLib.MenuAttributeIter iterate_item_attributes (int item_index) {
			return (_menu as MenuModel).iterate_item_attributes(item_index);
		}

		public override GLib.MenuLinkIter iterate_item_links (int item_index) {
			return (_menu as MenuModel).iterate_item_links(item_index);
		}
	}
}
