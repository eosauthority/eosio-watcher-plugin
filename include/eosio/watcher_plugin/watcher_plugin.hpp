/**
 *  @file
 *  @copyright eosauthority - free to use and modify - see LICENSE.txt
 */
#pragma once
#include <appbase/application.hpp>
#include <eosio/chain_plugin/chain_plugin.hpp>

namespace eosio {

   using namespace appbase;

   typedef std::unique_ptr<class watcher_plugin_impl> watcher_plugin_ptr;

   class watcher_plugin : public appbase::plugin<watcher_plugin> {
   public:
      watcher_plugin();
      virtual ~watcher_plugin();

      APPBASE_PLUGIN_REQUIRES((chain_plugin))

      virtual void set_program_options(options_description&, options_description& cfg) override;

      void plugin_initialize(const variables_map& options);
      void plugin_startup();
      void plugin_shutdown();

   private:
      watcher_plugin_ptr my;
   };

}
