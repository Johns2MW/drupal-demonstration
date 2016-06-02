<?php
/**
 * @file
 * sample_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function sample_content_types_node_info() {
  $items = array(
    'project_page' => array(
      'name' => t('Project Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
