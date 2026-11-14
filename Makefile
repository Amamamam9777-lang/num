# Настройки Theos
export ARCHS = arm64
export TARGET = iphone:clang:latest:14.0
export THEOS_PACKAGE_SCHEME = rootless

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = HMOOD_FUCK_MAX

$(TWEAK_NAME)_FILES = $(wildcard HMOOD/*.mm) $(wildcard HMOOD/*.m) $(wildcard HMOOD/*.cpp) $(wildcard HMOOD/*.xm) \
                      $(wildcard HMOOD/ESP/*.mm) $(wildcard HMOOD/ESP/*.m) $(wildcard HMOOD/ESP/*.cpp) \
                      $(wildcard HMOOD/ESP/imgui/*.mm) $(wildcard HMOOD/ESP/imgui/*.m) $(wildcard HMOOD/ESP/imgui/*.cpp) \
                      $(wildcard HMOOD/SDK/*.cpp) $(wildcard HMOOD/SDK/*.mm) $(wildcard HMOOD/SDK/*.m)

$(TWEAK_NAME)_CFLAGS = -fobjc-arc -Wno-error -Wno-deprecated-declarations -Wno-unused-variable -Wno-unused-value -Wno-module-import-in-extern-c -Wno-unicode-whitespace
$(TWEAK_NAME)_CCFLAGS = -std=c++20 -fno-rtti -fno-exceptions -DNDEBUG -fms-extensions -Wno-error -Wno-macro-redefined -Wno-unicode-whitespace \
                        -IHMOOD -IHMOOD/ESP -IHMOOD/SDK -IHMOOD/ESP/imgui
$(TWEAK_NAME)_CXXFLAGS = -std=c++20 -fno-rtti -fno-exceptions -DNDEBUG -fms-extensions -Wno-error -Wno-macro-redefined -Wno-unicode-whitespace \
                         -IHMOOD -IHMOOD/ESP -IHMOOD/SDK -IHMOOD/ESP/imgui

$(TWEAK_NAME)_FRAMEWORKS = UIKit Foundation Security QuartzCore CoreGraphics CoreText AVFoundation Accelerate GLKit SystemConfiguration GameController Metal MetalKit
$(TWEAK_NAME)_PRIVATE_FRAMEWORKS = IOKit

# ГЛАВНОЕ: линкуем без Substrate, неразрешённые символы игнорируем
$(TWEAK_NAME)_LDFLAGS = -Wl,-undefined,dynamic_lookup

include $(THEOS_MAKE_PATH)/tweak.mk