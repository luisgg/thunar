#ifndef __THUNAR_MARSHAL_H__
#define __THUNAR_MARSHAL_H__

#ifndef ___thunar_marshal_MARSHAL_H__
#define ___thunar_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* BOOLEAN:POINTER (thunar-marshal.list:1) */
extern void _thunar_marshal_BOOLEAN__POINTER (GClosure     *closure,
                                              GValue       *return_value,
                                              guint         n_param_values,
                                              const GValue *param_values,
                                              gpointer      invocation_hint,
                                              gpointer      marshal_data);

/* BOOLEAN:VOID (thunar-marshal.list:2) */
extern void _thunar_marshal_BOOLEAN__VOID (GClosure     *closure,
                                           GValue       *return_value,
                                           guint         n_param_values,
                                           const GValue *param_values,
                                           gpointer      invocation_hint,
                                           gpointer      marshal_data);

/* BOOLEAN:INT (thunar-marshal.list:3) */
extern void _thunar_marshal_BOOLEAN__INT (GClosure     *closure,
                                          GValue       *return_value,
                                          guint         n_param_values,
                                          const GValue *param_values,
                                          gpointer      invocation_hint,
                                          gpointer      marshal_data);

/* FLAGS:OBJECT,OBJECT (thunar-marshal.list:4) */
extern void _thunar_marshal_FLAGS__OBJECT_OBJECT (GClosure     *closure,
                                                  GValue       *return_value,
                                                  guint         n_param_values,
                                                  const GValue *param_values,
                                                  gpointer      invocation_hint,
                                                  gpointer      marshal_data);

/* FLAGS:STRING,FLAGS (thunar-marshal.list:5) */
extern void _thunar_marshal_FLAGS__STRING_FLAGS (GClosure     *closure,
                                                 GValue       *return_value,
                                                 guint         n_param_values,
                                                 const GValue *param_values,
                                                 gpointer      invocation_hint,
                                                 gpointer      marshal_data);

/* VOID:STRING,STRING (thunar-marshal.list:6) */
extern void _thunar_marshal_VOID__STRING_STRING (GClosure     *closure,
                                                 GValue       *return_value,
                                                 guint         n_param_values,
                                                 const GValue *param_values,
                                                 gpointer      invocation_hint,
                                                 gpointer      marshal_data);

/* VOID:UINT64,UINT,UINT,UINT (thunar-marshal.list:7) */
extern void _thunar_marshal_VOID__UINT64_UINT_UINT_UINT (GClosure     *closure,
                                                         GValue       *return_value,
                                                         guint         n_param_values,
                                                         const GValue *param_values,
                                                         gpointer      invocation_hint,
                                                         gpointer      marshal_data);

/* VOID:UINT,BOXED,UINT,STRING (thunar-marshal.list:8) */
extern void _thunar_marshal_VOID__UINT_BOXED_UINT_STRING (GClosure     *closure,
                                                          GValue       *return_value,
                                                          guint         n_param_values,
                                                          const GValue *param_values,
                                                          gpointer      invocation_hint,
                                                          gpointer      marshal_data);

/* VOID:UINT,BOXED (thunar-marshal.list:9) */
extern void _thunar_marshal_VOID__UINT_BOXED (GClosure     *closure,
                                              GValue       *return_value,
                                              guint         n_param_values,
                                              const GValue *param_values,
                                              gpointer      invocation_hint,
                                              gpointer      marshal_data);

/* VOID:OBJECT,OBJECT (thunar-marshal.list:10) */
extern void _thunar_marshal_VOID__OBJECT_OBJECT (GClosure     *closure,
                                                 GValue       *return_value,
                                                 guint         n_param_values,
                                                 const GValue *param_values,
                                                 gpointer      invocation_hint,
                                                 gpointer      marshal_data);

G_END_DECLS

#endif /* ___thunar_marshal_MARSHAL_H__ */

#endif /* !__THUNAR_MARSHAL_H__ */
