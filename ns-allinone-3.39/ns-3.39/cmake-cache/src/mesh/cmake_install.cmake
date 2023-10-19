# Install script for directory: /Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/build/lib/libns3.39-mesh-debug.dylib")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libns3.39-mesh-debug.dylib" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libns3.39-mesh-debug.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/build/lib"
      -add_rpath "/usr/local/lib:$ORIGIN/:$ORIGIN/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libns3.39-mesh-debug.dylib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libns3.39-mesh-debug.dylib")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ns3" TYPE FILE FILES
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/helper/dot11s/dot11s-installer.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/helper/flame/flame-installer.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/helper/mesh-helper.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/helper/mesh-stack-installer.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/dot11s/dot11s-mac-header.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/dot11s/hwmp-protocol.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/dot11s/hwmp-rtable.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/dot11s/ie-dot11s-beacon-timing.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/dot11s/ie-dot11s-configuration.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/dot11s/ie-dot11s-id.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/dot11s/ie-dot11s-metric-report.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/dot11s/ie-dot11s-peer-management.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/dot11s/ie-dot11s-peering-protocol.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/dot11s/ie-dot11s-perr.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/dot11s/ie-dot11s-prep.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/dot11s/ie-dot11s-preq.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/dot11s/ie-dot11s-rann.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/dot11s/peer-link-frame.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/dot11s/peer-link.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/dot11s/peer-management-protocol.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/flame/flame-header.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/flame/flame-protocol-mac.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/flame/flame-protocol.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/flame/flame-rtable.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/mesh-information-element-vector.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/mesh-l2-routing-protocol.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/mesh-point-device.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/mesh-wifi-beacon.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/mesh-wifi-interface-mac-plugin.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/src/mesh/model/mesh-wifi-interface-mac.h"
    "/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/build/include/ns3/mesh-module.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/stianhs/Documents/5.sem/IN3260/queuing_delay/ns-allinone-3.39/ns-3.39/cmake-cache/src/mesh/examples/cmake_install.cmake")

endif()

