<?php
/**
 * @file
 * smash_schedule.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function smash_schedule_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'schedule';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Schedule';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Schedule';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_location',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Event Date/Time */
  $handler->display->display_options['fields']['field_event_date_time']['id'] = 'field_event_date_time';
  $handler->display->display_options['fields']['field_event_date_time']['table'] = 'field_data_field_event_date_time';
  $handler->display->display_options['fields']['field_event_date_time']['field'] = 'field_event_date_time';
  $handler->display->display_options['fields']['field_event_date_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_time']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Event Type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Content: Location (field_location) */
  $handler->display->display_options['sorts']['field_location_target_id']['id'] = 'field_location_target_id';
  $handler->display->display_options['sorts']['field_location_target_id']['table'] = 'field_data_field_location';
  $handler->display->display_options['sorts']['field_location_target_id']['field'] = 'field_location_target_id';
  /* Sort criterion: Content: Event Date/Time -  start date (field_event_date_time) */
  $handler->display->display_options['sorts']['field_event_date_time_value']['id'] = 'field_event_date_time_value';
  $handler->display->display_options['sorts']['field_event_date_time_value']['table'] = 'field_data_field_event_date_time';
  $handler->display->display_options['sorts']['field_event_date_time_value']['field'] = 'field_event_date_time_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Schedule Page */
  $handler = $view->new_display('page', 'Schedule Page', 'schedule_page');
  $handler->display->display_options['path'] = 'schedule';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Schedule';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['schedule'] = $view;

  return $export;
}
