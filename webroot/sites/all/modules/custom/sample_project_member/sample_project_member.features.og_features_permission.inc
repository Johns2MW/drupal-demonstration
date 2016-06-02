<?php
/**
 * @file
 * sample_project_member.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function sample_project_member_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:project_page:add user'
  $permissions['node:project_page:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project_page:administer group'
  $permissions['node:project_page:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project_page:approve and deny subscription'
  $permissions['node:project_page:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project_page:create project_page content'
  $permissions['node:project_page:create project_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project_page:delete any project_page content'
  $permissions['node:project_page:delete any project_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project_page:delete own project_page content'
  $permissions['node:project_page:delete own project_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project_page:manage members'
  $permissions['node:project_page:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project_page:manage permissions'
  $permissions['node:project_page:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project_page:manage roles'
  $permissions['node:project_page:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project_page:subscribe'
  $permissions['node:project_page:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project_page:subscribe without approval'
  $permissions['node:project_page:subscribe without approval'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project_page:unsubscribe'
  $permissions['node:project_page:unsubscribe'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project_page:update any project_page content'
  $permissions['node:project_page:update any project_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project_page:update body field'
  $permissions['node:project_page:update body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project_page:update field_file field'
  $permissions['node:project_page:update field_file field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project_page:update field_image field'
  $permissions['node:project_page:update field_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project_page:update group'
  $permissions['node:project_page:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project_page:update group_group field'
  $permissions['node:project_page:update group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project_page:update og_group_ref field'
  $permissions['node:project_page:update og_group_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project_page:update og_user_node field'
  $permissions['node:project_page:update og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project_page:update own project_page content'
  $permissions['node:project_page:update own project_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project_page:view body field'
  $permissions['node:project_page:view body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project_page:view field_file field'
  $permissions['node:project_page:view field_file field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project_page:view field_image field'
  $permissions['node:project_page:view field_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project_page:view group_group field'
  $permissions['node:project_page:view group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project_page:view og_group_ref field'
  $permissions['node:project_page:view og_group_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project_page:view og_user_node field'
  $permissions['node:project_page:view og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  return $permissions;
}
