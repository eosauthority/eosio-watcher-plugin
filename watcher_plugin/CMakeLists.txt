file(GLOB HEADERS "include/eosio/watcher_plugin/*.hpp")
add_library( watcher_plugin
             watcher_plugin.cpp
             ${HEADERS} include/eosio/watcher_plugin/watcher_plugin.hpp
                        include/eosio/watcher_plugin/http_async_client.hpp)

target_link_libraries( watcher_plugin chain_plugin eosio_chain appbase fc )
target_include_directories( watcher_plugin PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" )
