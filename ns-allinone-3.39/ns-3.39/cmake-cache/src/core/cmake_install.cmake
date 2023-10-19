# Install script for directory: /Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Library/Developer/CommandLineTools/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/build/lib/libns3.39-core-debug.dylib")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libns3.39-core-debug.dylib" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libns3.39-core-debug.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "/usr/local/lib:$ORIGIN/:$ORIGIN/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libns3.39-core-debug.dylib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libns3.39-core-debug.dylib")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ns3" TYPE FILE FILES
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/int64x64-128.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/example-as-test.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/helper/csv-reader.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/helper/event-garbage-collector.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/helper/random-variable-stream-helper.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/abort.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/ascii-file.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/ascii-test.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/assert.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/attribute-accessor-helper.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/attribute-construction-list.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/attribute-container.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/attribute-helper.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/attribute.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/boolean.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/breakpoint.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/build-profile.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/calendar-scheduler.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/callback.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/command-line.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/config.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/default-deleter.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/default-simulator-impl.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/deprecated.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/des-metrics.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/double.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/enum.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/event-id.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/event-impl.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/fatal-error.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/fatal-impl.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/fd-reader.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/environment-variable.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/global-value.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/hash-fnv.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/hash-function.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/hash-murmur3.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/hash.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/heap-scheduler.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/int-to-type.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/int64x64-double.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/int64x64.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/integer.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/length.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/list-scheduler.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/log-macros-disabled.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/log-macros-enabled.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/log.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/make-event.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/map-scheduler.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/math.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/names.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/node-printer.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/nstime.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/object-base.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/object-factory.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/object-map.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/object-ptr-container.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/object-vector.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/object.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/pair.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/pointer.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/priority-queue-scheduler.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/ptr.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/random-variable-stream.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/rng-seed-manager.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/rng-stream.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/scheduler.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/show-progress.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/simple-ref-count.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/simulation-singleton.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/simulator-impl.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/simulator.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/singleton.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/string.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/synchronizer.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/system-path.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/system-wall-clock-ms.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/system-wall-clock-timestamp.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/test.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/time-printer.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/timer-impl.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/timer.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/trace-source-accessor.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/traced-callback.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/traced-value.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/trickle-timer.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/tuple.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/type-id.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/type-name.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/type-traits.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/uinteger.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/unused.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/valgrind.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/vector.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/warnings.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/watchdog.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/realtime-simulator-impl.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/wall-clock-synchronizer.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/val-array.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/core/model/matrix-array.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/build/include/ns3/config-store-config.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/build/include/ns3/core-config.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/build/include/ns3/core-module.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/cmake-cache/src/core/examples/cmake_install.cmake")

endif()

