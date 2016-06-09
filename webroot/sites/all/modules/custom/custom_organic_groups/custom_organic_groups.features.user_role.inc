<?php
/**
 * @file
 * custom_organic_groups.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function custom_organic_groups_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 10,
  );

  // Exported role: tester.
  $roles['tester'] = array(
    'name' => 'tester',
    'weight' => 11,
  );

  return $roles;
}
