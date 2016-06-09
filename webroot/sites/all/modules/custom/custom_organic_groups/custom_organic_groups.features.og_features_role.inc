<?php
/**
 * @file
 * custom_organic_groups.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function custom_organic_groups_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:group:tester'.
  $roles['node:group:tester'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'group',
    'name' => 'tester',
  );

  // Exported OG Role: 'node:subgroup:tester'.
  $roles['node:subgroup:tester'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'subgroup',
    'name' => 'tester',
  );

  return $roles;
}
