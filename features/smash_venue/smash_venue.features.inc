<?php
/**
 * @file
 * smash_venue.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function smash_venue_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function smash_venue_node_info() {
  $items = array(
    'location' => array(
      'name' => t('Location'),
      'base' => 'node_content',
      'description' => t('A location on this event\'s venue maps.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'venue_map' => array(
      'name' => t('Venue Map'),
      'base' => 'node_content',
      'description' => t('Maps associated with the current venue.'),
      'has_title' => '1',
      'title_label' => t('Map Name'),
      'help' => '',
    ),
  );
  return $items;
}
