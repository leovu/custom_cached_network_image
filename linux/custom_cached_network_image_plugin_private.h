#include <flutter_linux/flutter_linux.h>

#include "include/custom_cached_network_image/custom_cached_network_image_plugin.h"

// This file exposes some plugin internals for unit testing. See
// https://github.com/flutter/flutter/issues/88724 for current limitations
// in the unit-testable API.

// Handles the getPlatformVersion method call.
FlMethodResponse *get_platform_version();
