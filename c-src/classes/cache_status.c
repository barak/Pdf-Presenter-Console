/* cache_status.c generated by valac 0.16.0, the Vala compiler
 * generated from cache_status.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <float.h>
#include <math.h>
#include <gtk/gtk.h>
#include <gobject/gvaluecollector.h>


#define PDFPC_TYPE_CACHE_STATUS (pdfpc_cache_status_get_type ())
#define PDFPC_CACHE_STATUS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PDFPC_TYPE_CACHE_STATUS, pdfpcCacheStatus))
#define PDFPC_CACHE_STATUS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PDFPC_TYPE_CACHE_STATUS, pdfpcCacheStatusClass))
#define PDFPC_IS_CACHE_STATUS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PDFPC_TYPE_CACHE_STATUS))
#define PDFPC_IS_CACHE_STATUS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PDFPC_TYPE_CACHE_STATUS))
#define PDFPC_CACHE_STATUS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PDFPC_TYPE_CACHE_STATUS, pdfpcCacheStatusClass))

typedef struct _pdfpcCacheStatus pdfpcCacheStatus;
typedef struct _pdfpcCacheStatusClass pdfpcCacheStatusClass;
typedef struct _pdfpcCacheStatusPrivate pdfpcCacheStatusPrivate;

#define PDFPC_VIEW_TYPE_PRERENDERING (pdfpc_view_prerendering_get_type ())
#define PDFPC_VIEW_PRERENDERING(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PDFPC_VIEW_TYPE_PRERENDERING, pdfpcViewPrerendering))
#define PDFPC_VIEW_IS_PRERENDERING(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PDFPC_VIEW_TYPE_PRERENDERING))
#define PDFPC_VIEW_PRERENDERING_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), PDFPC_VIEW_TYPE_PRERENDERING, pdfpcViewPrerenderingIface))

typedef struct _pdfpcViewPrerendering pdfpcViewPrerendering;
typedef struct _pdfpcViewPrerenderingIface pdfpcViewPrerenderingIface;

#define PDFPC_VIEW_TYPE_BASE (pdfpc_view_base_get_type ())
#define PDFPC_VIEW_BASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PDFPC_VIEW_TYPE_BASE, pdfpcViewBase))
#define PDFPC_VIEW_BASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PDFPC_VIEW_TYPE_BASE, pdfpcViewBaseClass))
#define PDFPC_VIEW_IS_BASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PDFPC_VIEW_TYPE_BASE))
#define PDFPC_VIEW_IS_BASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PDFPC_VIEW_TYPE_BASE))
#define PDFPC_VIEW_BASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PDFPC_VIEW_TYPE_BASE, pdfpcViewBaseClass))

typedef struct _pdfpcViewBase pdfpcViewBase;
typedef struct _pdfpcViewBaseClass pdfpcViewBaseClass;

#define PDFPC_RENDERER_TYPE_BASE (pdfpc_renderer_base_get_type ())
#define PDFPC_RENDERER_BASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PDFPC_RENDERER_TYPE_BASE, pdfpcRendererBase))
#define PDFPC_RENDERER_BASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PDFPC_RENDERER_TYPE_BASE, pdfpcRendererBaseClass))
#define PDFPC_RENDERER_IS_BASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PDFPC_RENDERER_TYPE_BASE))
#define PDFPC_RENDERER_IS_BASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PDFPC_RENDERER_TYPE_BASE))
#define PDFPC_RENDERER_BASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PDFPC_RENDERER_TYPE_BASE, pdfpcRendererBaseClass))

typedef struct _pdfpcRendererBase pdfpcRendererBase;
typedef struct _pdfpcRendererBaseClass pdfpcRendererBaseClass;

#define PDFPC_METADATA_TYPE_BASE (pdfpc_metadata_base_get_type ())
#define PDFPC_METADATA_BASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PDFPC_METADATA_TYPE_BASE, pdfpcMetadataBase))
#define PDFPC_METADATA_BASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PDFPC_METADATA_TYPE_BASE, pdfpcMetadataBaseClass))
#define PDFPC_METADATA_IS_BASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PDFPC_METADATA_TYPE_BASE))
#define PDFPC_METADATA_IS_BASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PDFPC_METADATA_TYPE_BASE))
#define PDFPC_METADATA_BASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PDFPC_METADATA_TYPE_BASE, pdfpcMetadataBaseClass))

typedef struct _pdfpcMetadataBase pdfpcMetadataBase;
typedef struct _pdfpcMetadataBaseClass pdfpcMetadataBaseClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _pdfpcParamSpecCacheStatus pdfpcParamSpecCacheStatus;

struct _pdfpcCacheStatus {
	GTypeInstance parent_instance;
	volatile int ref_count;
	pdfpcCacheStatusPrivate * priv;
	gint current_value;
	gint max_value;
};

struct _pdfpcCacheStatusClass {
	GTypeClass parent_class;
	void (*finalize) (pdfpcCacheStatus *self);
};

typedef void (*pdfpcCacheStatusUpdateFunction) (gdouble progress, void* user_data);
typedef void (*pdfpcCacheStatusUpdateComplete) (void* user_data);
struct _pdfpcCacheStatusPrivate {
	pdfpcCacheStatusUpdateFunction update_function;
	gpointer update_function_target;
	GDestroyNotify update_function_target_destroy_notify;
	pdfpcCacheStatusUpdateComplete update_complete;
	gpointer update_complete_target;
	GDestroyNotify update_complete_target_destroy_notify;
};

struct _pdfpcViewPrerenderingIface {
	GTypeInterface parent_iface;
};

struct _pdfpcParamSpecCacheStatus {
	GParamSpec parent_instance;
};


static gpointer pdfpc_cache_status_parent_class = NULL;

gpointer pdfpc_cache_status_ref (gpointer instance);
void pdfpc_cache_status_unref (gpointer instance);
GParamSpec* pdfpc_param_spec_cache_status (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void pdfpc_value_set_cache_status (GValue* value, gpointer v_object);
void pdfpc_value_take_cache_status (GValue* value, gpointer v_object);
gpointer pdfpc_value_get_cache_status (const GValue* value);
GType pdfpc_cache_status_get_type (void) G_GNUC_CONST;
#define PDFPC_CACHE_STATUS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), PDFPC_TYPE_CACHE_STATUS, pdfpcCacheStatusPrivate))
enum  {
	PDFPC_CACHE_STATUS_DUMMY_PROPERTY
};
void pdfpc_cache_status_register_update (pdfpcCacheStatus* self, pdfpcCacheStatusUpdateFunction update, void* update_target, pdfpcCacheStatusUpdateComplete complete, void* complete_target);
void pdfpc_cache_status_update (pdfpcCacheStatus* self);
GType pdfpc_view_prerendering_get_type (void) G_GNUC_CONST;
void pdfpc_cache_status_monitor_view (pdfpcCacheStatus* self, pdfpcViewPrerendering* view);
static void __lambda2_ (pdfpcCacheStatus* self, pdfpcViewPrerendering* v);
GType pdfpc_view_base_get_type (void) G_GNUC_CONST;
GType pdfpc_renderer_base_get_type (void) G_GNUC_CONST;
pdfpcRendererBase* pdfpc_view_base_get_renderer (pdfpcViewBase* self);
GType pdfpc_metadata_base_get_type (void) G_GNUC_CONST;
pdfpcMetadataBase* pdfpc_renderer_base_get_metadata (pdfpcRendererBase* self);
guint pdfpc_metadata_base_get_slide_count (pdfpcMetadataBase* self);
static void ___lambda2__pdfpc_view_prerendering_prerendering_started (pdfpcViewPrerendering* _sender, gpointer self);
static void __lambda3_ (pdfpcCacheStatus* self);
static void ___lambda3__pdfpc_view_prerendering_slide_prerendered (pdfpcViewPrerendering* _sender, gpointer self);
pdfpcCacheStatus* pdfpc_cache_status_new (void);
pdfpcCacheStatus* pdfpc_cache_status_construct (GType object_type);
static void pdfpc_cache_status_finalize (pdfpcCacheStatus* obj);


/**
         * Register the functions for updating
         */
void pdfpc_cache_status_register_update (pdfpcCacheStatus* self, pdfpcCacheStatusUpdateFunction update, void* update_target, pdfpcCacheStatusUpdateComplete complete, void* complete_target) {
	pdfpcCacheStatusUpdateFunction _tmp0_;
	void* _tmp0__target;
	pdfpcCacheStatusUpdateComplete _tmp1_;
	void* _tmp1__target;
	g_return_if_fail (self != NULL);
	_tmp0_ = update;
	_tmp0__target = update_target;
	(self->priv->update_function_target_destroy_notify == NULL) ? NULL : (self->priv->update_function_target_destroy_notify (self->priv->update_function_target), NULL);
	self->priv->update_function = NULL;
	self->priv->update_function_target = NULL;
	self->priv->update_function_target_destroy_notify = NULL;
	self->priv->update_function = _tmp0_;
	self->priv->update_function_target = _tmp0__target;
	self->priv->update_function_target_destroy_notify = NULL;
	_tmp1_ = complete;
	_tmp1__target = complete_target;
	(self->priv->update_complete_target_destroy_notify == NULL) ? NULL : (self->priv->update_complete_target_destroy_notify (self->priv->update_complete_target), NULL);
	self->priv->update_complete = NULL;
	self->priv->update_complete_target = NULL;
	self->priv->update_complete_target_destroy_notify = NULL;
	self->priv->update_complete = _tmp1_;
	self->priv->update_complete_target = _tmp1__target;
	self->priv->update_complete_target_destroy_notify = NULL;
}


/**
         * Draw the current state to the widgets surface
         */
void pdfpc_cache_status_update (pdfpcCacheStatus* self) {
	gint _tmp0_;
	gint _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->current_value;
	_tmp1_ = self->max_value;
	if (_tmp0_ == _tmp1_) {
		pdfpcCacheStatusUpdateComplete _tmp2_;
		void* _tmp2__target;
		_tmp2_ = self->priv->update_complete;
		_tmp2__target = self->priv->update_complete_target;
		if (_tmp2_ != NULL) {
			pdfpcCacheStatusUpdateComplete _tmp3_;
			void* _tmp3__target;
			_tmp3_ = self->priv->update_complete;
			_tmp3__target = self->priv->update_complete_target;
			_tmp3_ (_tmp3__target);
		}
	} else {
		pdfpcCacheStatusUpdateFunction _tmp4_;
		void* _tmp4__target;
		_tmp4_ = self->priv->update_function;
		_tmp4__target = self->priv->update_function_target;
		if (_tmp4_ != NULL) {
			pdfpcCacheStatusUpdateFunction _tmp5_;
			void* _tmp5__target;
			gint _tmp6_;
			gint _tmp7_;
			_tmp5_ = self->priv->update_function;
			_tmp5__target = self->priv->update_function_target;
			_tmp6_ = self->current_value;
			_tmp7_ = self->max_value;
			_tmp5_ (((gdouble) _tmp6_) / _tmp7_, _tmp5__target);
		}
	}
}


/**
         * Monitor a new view for prerendering information
         */
static void __lambda2_ (pdfpcCacheStatus* self, pdfpcViewPrerendering* v) {
	gint _tmp0_;
	pdfpcViewPrerendering* _tmp1_;
	pdfpcRendererBase* _tmp2_ = NULL;
	pdfpcRendererBase* _tmp3_;
	pdfpcMetadataBase* _tmp4_ = NULL;
	pdfpcMetadataBase* _tmp5_;
	guint _tmp6_ = 0U;
	g_return_if_fail (v != NULL);
	_tmp0_ = self->max_value;
	_tmp1_ = v;
	_tmp2_ = pdfpc_view_base_get_renderer (PDFPC_VIEW_BASE (_tmp1_));
	_tmp3_ = _tmp2_;
	_tmp4_ = pdfpc_renderer_base_get_metadata (_tmp3_);
	_tmp5_ = _tmp4_;
	_tmp6_ = pdfpc_metadata_base_get_slide_count (_tmp5_);
	self->max_value = _tmp0_ + ((gint) _tmp6_);
	_g_object_unref0 (_tmp5_);
	_g_object_unref0 (_tmp3_);
}


static void ___lambda2__pdfpc_view_prerendering_prerendering_started (pdfpcViewPrerendering* _sender, gpointer self) {
	__lambda2_ (self, _sender);
}


static void __lambda3_ (pdfpcCacheStatus* self) {
	gint _tmp0_;
	_tmp0_ = self->current_value;
	self->current_value = _tmp0_ + 1;
	pdfpc_cache_status_update (self);
}


static void ___lambda3__pdfpc_view_prerendering_slide_prerendered (pdfpcViewPrerendering* _sender, gpointer self) {
	__lambda3_ (self);
}


void pdfpc_cache_status_monitor_view (pdfpcCacheStatus* self, pdfpcViewPrerendering* view) {
	pdfpcViewPrerendering* _tmp0_;
	pdfpcViewPrerendering* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (view != NULL);
	_tmp0_ = view;
	g_signal_connect (_tmp0_, "prerendering-started", (GCallback) ___lambda2__pdfpc_view_prerendering_prerendering_started, self);
	_tmp1_ = view;
	g_signal_connect (_tmp1_, "slide-prerendered", (GCallback) ___lambda3__pdfpc_view_prerendering_slide_prerendered, self);
}


pdfpcCacheStatus* pdfpc_cache_status_construct (GType object_type) {
	pdfpcCacheStatus* self = NULL;
	self = (pdfpcCacheStatus*) g_type_create_instance (object_type);
	return self;
}


pdfpcCacheStatus* pdfpc_cache_status_new (void) {
	return pdfpc_cache_status_construct (PDFPC_TYPE_CACHE_STATUS);
}


static void pdfpc_value_cache_status_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void pdfpc_value_cache_status_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		pdfpc_cache_status_unref (value->data[0].v_pointer);
	}
}


static void pdfpc_value_cache_status_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = pdfpc_cache_status_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer pdfpc_value_cache_status_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* pdfpc_value_cache_status_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		pdfpcCacheStatus* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = pdfpc_cache_status_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* pdfpc_value_cache_status_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	pdfpcCacheStatus** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = pdfpc_cache_status_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* pdfpc_param_spec_cache_status (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	pdfpcParamSpecCacheStatus* spec;
	g_return_val_if_fail (g_type_is_a (object_type, PDFPC_TYPE_CACHE_STATUS), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer pdfpc_value_get_cache_status (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, PDFPC_TYPE_CACHE_STATUS), NULL);
	return value->data[0].v_pointer;
}


void pdfpc_value_set_cache_status (GValue* value, gpointer v_object) {
	pdfpcCacheStatus* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, PDFPC_TYPE_CACHE_STATUS));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, PDFPC_TYPE_CACHE_STATUS));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		pdfpc_cache_status_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		pdfpc_cache_status_unref (old);
	}
}


void pdfpc_value_take_cache_status (GValue* value, gpointer v_object) {
	pdfpcCacheStatus* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, PDFPC_TYPE_CACHE_STATUS));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, PDFPC_TYPE_CACHE_STATUS));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		pdfpc_cache_status_unref (old);
	}
}


static void pdfpc_cache_status_class_init (pdfpcCacheStatusClass * klass) {
	pdfpc_cache_status_parent_class = g_type_class_peek_parent (klass);
	PDFPC_CACHE_STATUS_CLASS (klass)->finalize = pdfpc_cache_status_finalize;
	g_type_class_add_private (klass, sizeof (pdfpcCacheStatusPrivate));
}


static void pdfpc_cache_status_instance_init (pdfpcCacheStatus * self) {
	self->priv = PDFPC_CACHE_STATUS_GET_PRIVATE (self);
	self->current_value = 0;
	self->max_value = 0;
	self->priv->update_function = NULL;
	self->priv->update_complete = NULL;
	self->ref_count = 1;
}


static void pdfpc_cache_status_finalize (pdfpcCacheStatus* obj) {
	pdfpcCacheStatus * self;
	self = PDFPC_CACHE_STATUS (obj);
	(self->priv->update_function_target_destroy_notify == NULL) ? NULL : (self->priv->update_function_target_destroy_notify (self->priv->update_function_target), NULL);
	self->priv->update_function = NULL;
	self->priv->update_function_target = NULL;
	self->priv->update_function_target_destroy_notify = NULL;
	(self->priv->update_complete_target_destroy_notify == NULL) ? NULL : (self->priv->update_complete_target_destroy_notify (self->priv->update_complete_target), NULL);
	self->priv->update_complete = NULL;
	self->priv->update_complete_target = NULL;
	self->priv->update_complete_target_destroy_notify = NULL;
}


/**
     * Interface for showing the fill status of all registered pdf image caches
     */
GType pdfpc_cache_status_get_type (void) {
	static volatile gsize pdfpc_cache_status_type_id__volatile = 0;
	if (g_once_init_enter (&pdfpc_cache_status_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { pdfpc_value_cache_status_init, pdfpc_value_cache_status_free_value, pdfpc_value_cache_status_copy_value, pdfpc_value_cache_status_peek_pointer, "p", pdfpc_value_cache_status_collect_value, "p", pdfpc_value_cache_status_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (pdfpcCacheStatusClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) pdfpc_cache_status_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (pdfpcCacheStatus), 0, (GInstanceInitFunc) pdfpc_cache_status_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType pdfpc_cache_status_type_id;
		pdfpc_cache_status_type_id = g_type_register_fundamental (g_type_fundamental_next (), "pdfpcCacheStatus", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&pdfpc_cache_status_type_id__volatile, pdfpc_cache_status_type_id);
	}
	return pdfpc_cache_status_type_id__volatile;
}


gpointer pdfpc_cache_status_ref (gpointer instance) {
	pdfpcCacheStatus* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void pdfpc_cache_status_unref (gpointer instance) {
	pdfpcCacheStatus* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		PDFPC_CACHE_STATUS_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}



