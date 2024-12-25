#ifndef FLUTTER_PLUGIN_CUSTOM_CACHED_NETWORK_IMAGE_PLUGIN_H_
#define FLUTTER_PLUGIN_CUSTOM_CACHED_NETWORK_IMAGE_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace custom_cached_network_image {

class CustomCachedNetworkImagePlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  CustomCachedNetworkImagePlugin();

  virtual ~CustomCachedNetworkImagePlugin();

  // Disallow copy and assign.
  CustomCachedNetworkImagePlugin(const CustomCachedNetworkImagePlugin&) = delete;
  CustomCachedNetworkImagePlugin& operator=(const CustomCachedNetworkImagePlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace custom_cached_network_image

#endif  // FLUTTER_PLUGIN_CUSTOM_CACHED_NETWORK_IMAGE_PLUGIN_H_
