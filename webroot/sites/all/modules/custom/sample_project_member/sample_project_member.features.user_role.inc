<?php
/**
 * @file
 * sample_project_member.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function sample_project_member_user_default_roles() {
  $roles = array();

  // Exported role: Member.
  $roles['Member'] = array(
    'name' => 'Member',
    'weight' => 11,
  );

  return $roles;
}
