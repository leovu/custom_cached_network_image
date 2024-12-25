#ifndef FLUTTER_PLUGIN_CUSTOM_CACHED_NETWORK_IMAGE_PLUGIN_H_
#define FLUTTER_PLUGIN_CUSTOM_CACHED_NETWORK_IMAGE_PLUGIN_H_

#include <flutter_linux/flutter_linux.h>

G_BEGIN_DECLS

#ifdef FLUTTER_PLUGIN_IMPL
#define FLUTTER_PLUGIN_EXPORT __attribute__((visibility("default")))
#else
#define FLUTTER_PLUGIN_EXPORT
#endif

typedef struct _CustomCachedNetworkImagePlugin CustomCachedNetworkImagePlugin;
typedef struct {
  GObjectClass parent_class;
} CustomCachedNetworkImagePluginClass;

FLUTTER_PLUGIN_EXPORT GType custom_cached_network_image_plugin_get_type();

FLUTTER_PLUGIN_EXPORT void custom_cached_network_image_plugin_register_with_registrar(
    FlPluginRegistrar* registrar);

G_END_DECLS

#endif  // FLUTTER_PLUGIN_CUSTOM_CACHED_NETWORK_IMAGE_PLUGIN_H_
