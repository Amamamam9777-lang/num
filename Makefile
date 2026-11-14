# Настройки Theos
export ARCHS = arm64 arm64e
export TARGET = iphone:clang:latest:14.0
export THEOS_PACKAGE_SCHEME = rootless
export SUBSTRATE = no

include $(THEOS)/makefiles/common.mk

# Имя фреймворка (не твика!)
FRAMEWORK_NAME = HMOOD_FUCK_MAX

# Собираем все исходники, включая imgui
$(FRAMEWORK_NAME)_FILES = $(wildcard HMOOD/*.mm) $(wildcard HMOOD/*.m) $(wildcard HMOOD/*.cpp) $(wildcard HMOOD/*.xm) \
                          $(wildcard HMOOD/ESP/*.mm) $(wildcard HMOOD/ESP/*.m) $(wildcard HMOOD/ESP/*.cpp) \
                          $(wildcard HMOOD/ESP/imgui/*.mm) $(wildcard HMOOD/ESP/imgui/*.m) $(wildcard HMOOD/ESP/imgui/*.cpp) \
                          $(wildcard HMOOD/SDK/*.cpp) $(wildcard HMOOD/SDK/*.mm) $(wildcard HMOOD/SDK/*.m)

# Флаги (аналогично предыдущей версии)
$(FRAMEWORK_NAME)_CFLAGS = -fobjc-arc -Wno-error -Wno-deprecated-declarations -Wno-unused-variable -Wno-unused-value -Wno-module-import-in-extern-c -Wno-unicode-whitespace
$(FRAMEWORK_NAME)_CCFLAGS = -std=c++20 -fno-rtti -fno-exceptions -DNDEBUG -fms-extensions -Wno-error -Wno-macro-redefined -Wno-unicode-whitespace \
                            -IHMOOD -IHMOOD/ESP -IHMOOD/SDK -IHMOOD/ESP/imgui
$(FRAMEWORK_NAME)_CXXFLAGS = -std=c++20 -fno-rtti -fno-exceptions -DNDEBUG -fms-extensions -Wno-error -Wno-macro-redefined -Wno-unicode-whitespace \
                             -IHMOOD -IHMOOD/ESP -IHMOOD/SDK -IHMOOD/ESP/imgui

# Фреймворки и библиотеки
$(FRAMEWORK_NAME)_FRAMEWORKS = UIKit Foundation Security QuartzCore CoreGraphics CoreText AVFoundation Accelerate GLKit SystemConfiguration GameController Metal MetalKit
$(FRAMEWORK_NAME)_PRIVATE_FRAMEWORKS = IOKit
$(FRAMEWORK_NAME)_LIBRARIES = substrate

# КЛЮЧЕВОЕ ОТЛИЧИЕ: используем framework.mk вместо tweak.mk
include $(THEOS_MAKE_PATH)/framework.mk