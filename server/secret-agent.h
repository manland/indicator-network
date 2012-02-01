/* secret-agent.h generated by valac 0.14.0, the Vala compiler, do not modify */


#ifndef __SECRET_AGENT_H__
#define __SECRET_AGENT_H__

#include <glib.h>
#include <glib-object.h>
#include <nm-secret-agent.h>

G_BEGIN_DECLS


#define UNITY_SETTINGS_TYPE_SECRET_AGENT (unity_settings_secret_agent_get_type ())
#define UNITY_SETTINGS_SECRET_AGENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), UNITY_SETTINGS_TYPE_SECRET_AGENT, UnitySettingsSecretAgent))
#define UNITY_SETTINGS_SECRET_AGENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), UNITY_SETTINGS_TYPE_SECRET_AGENT, UnitySettingsSecretAgentClass))
#define UNITY_SETTINGS_IS_SECRET_AGENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), UNITY_SETTINGS_TYPE_SECRET_AGENT))
#define UNITY_SETTINGS_IS_SECRET_AGENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), UNITY_SETTINGS_TYPE_SECRET_AGENT))
#define UNITY_SETTINGS_SECRET_AGENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), UNITY_SETTINGS_TYPE_SECRET_AGENT, UnitySettingsSecretAgentClass))

#define UNITY_SETTINGS_SECRET_AGENT_SECRET_REQUESTED  "secret-requested"
#define UNITY_SETTINGS_SECRET_AGENT_REQUEST_CANCELLED "request-cancelled"

typedef struct _UnitySettingsSecretAgent UnitySettingsSecretAgent;
typedef struct _UnitySettingsSecretAgentClass UnitySettingsSecretAgentClass;
typedef struct _UnitySettingsSecretAgentPrivate UnitySettingsSecretAgentPrivate;

struct _UnitySettingsSecretAgent {
  NMSecretAgent parent_instance;
  UnitySettingsSecretAgentPrivate * priv;
};

struct _UnitySettingsSecretAgentClass {
  NMSecretAgentClass parent_class;

  void  (*secret_requested) (UnitySettingsSecretAgent      *self,
                             guint64                        id,
                             NMConnection                  *connection,
                             const char                    *setting_name,
                             const char                   **hints,
                             NMSecretAgentGetSecretsFlags   flags);

  void  (*requeste_cancelled) (UnitySettingsSecretAgent      *self,
                               guint64                        id,
                               NMConnection                  *connection,
                               const char                    *setting_name,
                               const char                   **hints,
                               NMSecretAgentGetSecretsFlags   flags);
};


GType                     unity_settings_secret_agent_get_type  (void) G_GNUC_CONST;
UnitySettingsSecretAgent* unity_settings_secret_agent_new       (void);
UnitySettingsSecretAgent* unity_settings_secret_agent_construct (GType object_type);

void unity_settings_secret_agent_provide_secret (UnitySettingsSecretAgent *agent,
                                                 guint64                   request,
                                                 GHashTable               *secrets);
void unity_settings_secret_agent_cancel_request (UnitySettingsSecretAgent *agent,
                                                 guint64                   request);

G_END_DECLS

#endif
