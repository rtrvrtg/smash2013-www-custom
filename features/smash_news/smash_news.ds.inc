<?php
/**
 * @file
 * smash_news.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function smash_news_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'related_news';
  $ds_field->label = 'Related News';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'block' => 'views|guest_news-related_news_block',
    'block_render' => '2',
  );
  $export['related_news'] = $ds_field;

  return $export;
}
