<?php
/**
 * @file
 * custom_organic_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function custom_organic_groups_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
