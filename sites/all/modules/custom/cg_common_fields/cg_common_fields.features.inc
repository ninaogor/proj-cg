<?php
/**
 * @file
 * cg_common_fields.features.inc
 */

/**
 * Implements hook_node_info().
 */
function cg_common_fields_node_info() {
  $items = array(
    'cause' => array(
      'name' => t('Cause'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cause'),
      'help' => '',
    ),
    'organization' => array(
      'name' => t('Organization'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Organization'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
