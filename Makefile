# Настройки Theos
export THEOS = /opt/theos
export ARCHS = arm64 arm64e
export TARGET = iphone:clang:latest:14.0
export THEOS_PACKAGE_SCHEME = rootless

include $(THEOS)/makefiles/common.mk

# Имя нашего твика (оно же будет именем .dylib)
TWEAK_NAME = HMOOD_FUCK_MAX

# Автоматически собираем все исходники из папки HMOOD и её подпапок
# Это избавит от необходимости перечислять каждый файл вручную
$(TWEAK_NAME)_FILES = $(wildcard HMOOD/*.mm) $(wildcard HMOOD/*.m) $(wildcard HMOOD/*.cpp) $(wildcard HMOOD/*.xm) \
                      $(wildcard HMOOD/ESP/*.mm) $(wildcard HMOOD/ESP/*.m) $(wildcard HMOOD/ESP/*.cpp) \
                      $(wildcard HMOOD/SDK/*.cpp) $(wildcard HMOOD/SDK/*.mm) $(wildcard HMOOD/SDK/*.m)

# Флаги компиляции (важно для вашего проекта)
$(TWEAK_NAME)_CFLAGS = -fobjc-arc -Wno-deprecated-declarations -Wno-unused-variable -Wno-unused-value -Wno-module-import-in-extern-c
$(TWEAK_NAME)_CCFLAGS = -std=c++20 -fno-rtti -fno-exceptions -DNDEBUG -fms-extensions
$(TWEAK_NAME)_CXXFLAGS = -std=c++20 -fno-rtti -fno-exceptions -DNDEBUG -fms-extensions

# Подключаемые фреймворки и библиотеки
$(TWEAK_NAME)_FRAMEWORKS = UIKit Foundation Security QuartzCore CoreGraphics CoreText AVFoundation Accelerate GLKit SystemConfiguration GameController Metal MetalKit
$(TWEAK_NAME)_PRIVATE_FRAMEWORKS = IOKit

# Если у вас есть библиотека Dobby (или другая .a), раскомментируйте и укажите путь
# $(TWEAK_NAME)_OBJ_FILES = HMOOD/libdobby.a

include $(THEOS_MAKE_PATH)/tweak.mk

# Дополнительная команда: после сборки копирует .dylib в корень для удобства
after-all::
	@echo "Копируем $(TWEAK_NAME).dylib в корень..."
	@cp .theos/obj/$(TWEAK_NAME).dylib ./$(TWEAK_NAME).dylib
