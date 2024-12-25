//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <custom_cached_network_image/custom_cached_network_image_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) custom_cached_network_image_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "CustomCachedNetworkImagePlugin");
  custom_cached_network_image_plugin_register_with_registrar(custom_cached_network_image_registrar);
}
