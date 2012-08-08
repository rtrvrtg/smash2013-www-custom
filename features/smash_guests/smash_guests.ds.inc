<?php
/**
 * @file
 * smash_guests.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function smash_guests_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|guest|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'guest';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'body',
        1 => 'field_events',
      ),
      'right' => array(
        0 => 'field_photo',
        1 => 'field_homepage',
        2 => 'field_twitter',
        3 => 'field_facebook',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'field_events' => 'left',
      'field_photo' => 'right',
      'field_homepage' => 'right',
      'field_twitter' => 'right',
      'field_facebook' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|guest|default'] = $ds_layout;

  return $export;
}
