#include "include/custom_cached_network_image/custom_cached_network_image_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "custom_cached_network_image_plugin.h"

void CustomCachedNetworkImagePluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  custom_cached_network_image::CustomCachedNetworkImagePlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
