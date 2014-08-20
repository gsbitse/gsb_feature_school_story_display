<?php
/**
 * @file
 * gsb_feature_school_story_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_school_story_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gsb_school_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'GSB School News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'School News';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Related Field Collection: field_related_faculty */
  $handler->display->display_options['relationships']['field_related_faculty_value']['id'] = 'field_related_faculty_value';
  $handler->display->display_options['relationships']['field_related_faculty_value']['table'] = 'field_data_field_related_faculty';
  $handler->display->display_options['relationships']['field_related_faculty_value']['field'] = 'field_related_faculty_value';
  $handler->display->display_options['relationships']['field_related_faculty_value']['ui_name'] = 'Related Field Collection: field_related_faculty';
  $handler->display->display_options['relationships']['field_related_faculty_value']['label'] = 'Related Field Collection';
  $handler->display->display_options['relationships']['field_related_faculty_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_related_faculty_value']['delta'] = '-1';
  /* Relationship: Faculty Name */
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['id'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['table'] = 'field_data_field_person_fac_single_ref';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['field'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['relationship'] = 'field_related_faculty_value';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['ui_name'] = 'Faculty Name';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['label'] = 'Faculty Name';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['required'] = TRUE;
  /* Field: Content: Source Publication Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Media Format */
  $handler->display->display_options['fields']['field_icon']['id'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['table'] = 'field_data_field_icon';
  $handler->display->display_options['fields']['field_icon']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['label'] = '';
  $handler->display->display_options['fields']['field_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_icon']['alter']['text'] = '<span class="media-icon [field_icon-value]"><span class="element-invisible">[field_icon-value]</span></span>';
  $handler->display->display_options['fields']['field_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_icon][title]';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_link_single]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Dek */
  $handler->display->display_options['fields']['field_editorial_summary']['id'] = 'field_editorial_summary';
  $handler->display->display_options['fields']['field_editorial_summary']['table'] = 'field_data_field_editorial_summary';
  $handler->display->display_options['fields']['field_editorial_summary']['field'] = 'field_editorial_summary';
  $handler->display->display_options['fields']['field_editorial_summary']['label'] = '';
  $handler->display->display_options['fields']['field_editorial_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_editorial_summary']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Sort criterion: Content: Source Publication Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'announcement' => 'announcement',
    'school_story' => 'school_story',
  );

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'faculty',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: EVA Field Form */
  $handler = $view->new_display('entity_view', 'EVA Field Form', 'entity_field_form');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'EVA Field Form';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_icon' => 'field_icon',
    'title' => 'title',
    'field_editorial_summary' => 'field_editorial_summary',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_icon' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_editorial_summary' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: GSB: Modal node add link */
  $handler->display->display_options['header']['gsb_node_modal_add_link']['id'] = 'gsb_node_modal_add_link';
  $handler->display->display_options['header']['gsb_node_modal_add_link']['table'] = 'gsb__global';
  $handler->display->display_options['header']['gsb_node_modal_add_link']['field'] = 'gsb_node_modal_add_link';
  $handler->display->display_options['header']['gsb_node_modal_add_link']['bundle'] = 'announcement';
  $handler->display->display_options['header']['gsb_node_modal_add_link']['text'] = 'Create an announcement';
  /* Header: GSB: Modal node add link */
  $handler->display->display_options['header']['gsb_node_modal_add_link_1']['id'] = 'gsb_node_modal_add_link_1';
  $handler->display->display_options['header']['gsb_node_modal_add_link_1']['table'] = 'gsb__global';
  $handler->display->display_options['header']['gsb_node_modal_add_link_1']['field'] = 'gsb_node_modal_add_link';
  $handler->display->display_options['header']['gsb_node_modal_add_link_1']['bundle'] = 'school_story';
  $handler->display->display_options['header']['gsb_node_modal_add_link_1']['text'] = 'Create a school story';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'There are no School News for this faculty.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_icon][title]';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_link_single]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Source Publication Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Field: Display on Profile */
  $handler->display->display_options['fields']['field_profile_visibility']['id'] = 'field_profile_visibility';
  $handler->display->display_options['fields']['field_profile_visibility']['table'] = 'field_data_field_profile_visibility';
  $handler->display->display_options['fields']['field_profile_visibility']['field'] = 'field_profile_visibility';
  $handler->display->display_options['fields']['field_profile_visibility']['relationship'] = 'field_related_faculty_value';
  $handler->display->display_options['fields']['field_profile_visibility']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Edit link (in modal) */
  $handler->display->display_options['fields']['edit_node_modal']['id'] = 'edit_node_modal';
  $handler->display->display_options['fields']['edit_node_modal']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_modal']['field'] = 'edit_node_modal';
  $handler->display->display_options['fields']['edit_node_modal']['label'] = '';
  $handler->display->display_options['fields']['edit_node_modal']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link (in modal) */
  $handler->display->display_options['fields']['delete_node_modal']['id'] = 'delete_node_modal';
  $handler->display->display_options['fields']['delete_node_modal']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node_modal']['field'] = 'delete_node_modal';
  $handler->display->display_options['fields']['delete_node_modal']['label'] = '';
  $handler->display->display_options['fields']['delete_node_modal']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Source Publication Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'faculty',
  );
  $handler->display->display_options['show_on'] = 'form';
  $export['gsb_school_news'] = $view;

  return $export;
}
