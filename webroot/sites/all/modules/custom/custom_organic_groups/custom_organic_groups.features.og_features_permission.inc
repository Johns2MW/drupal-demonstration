<?php
/**
 * @file
 * custom_organic_groups.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function custom_organic_groups_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:group:add user'
  $permissions['node:group:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:administer group'
  $permissions['node:group:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:approve and deny subscription'
  $permissions['node:group:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:create basic_page content'
  $permissions['node:group:create basic_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'tester' => 'tester',
    ),
  );

  // Exported og permission: 'node:group:create group content'
  $permissions['node:group:create group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:create subgroup content'
  $permissions['node:group:create subgroup content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:delete any basic_page content'
  $permissions['node:group:delete any basic_page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:delete any group content'
  $permissions['node:group:delete any group content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:delete any subgroup content'
  $permissions['node:group:delete any subgroup content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:delete own basic_page content'
  $permissions['node:group:delete own basic_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:delete own group content'
  $permissions['node:group:delete own group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:delete own subgroup content'
  $permissions['node:group:delete own subgroup content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:manage members'
  $permissions['node:group:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:manage permissions'
  $permissions['node:group:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:manage roles'
  $permissions['node:group:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:subscribe'
  $permissions['node:group:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:subscribe without approval'
  $permissions['node:group:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:unsubscribe'
  $permissions['node:group:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update any basic_page content'
  $permissions['node:group:update any basic_page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update any group content'
  $permissions['node:group:update any group content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update any subgroup content'
  $permissions['node:group:update any subgroup content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update body field'
  $permissions['node:group:update body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:update group'
  $permissions['node:group:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:update group_group field'
  $permissions['node:group:update group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:update og_group_ref field'
  $permissions['node:group:update og_group_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update og_roles_permissions field'
  $permissions['node:group:update og_roles_permissions field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update og_user_inheritance field'
  $permissions['node:group:update og_user_inheritance field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update og_user_node field'
  $permissions['node:group:update og_user_node field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update og_user_permission_inheritance field'
  $permissions['node:group:update og_user_permission_inheritance field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update own basic_page content'
  $permissions['node:group:update own basic_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:update own group content'
  $permissions['node:group:update own group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:update own subgroup content'
  $permissions['node:group:update own subgroup content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:view body field'
  $permissions['node:group:view body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'tester' => 'tester',
    ),
  );

  // Exported og permission: 'node:group:view group_group field'
  $permissions['node:group:view group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
      'tester' => 'tester',
    ),
  );

  // Exported og permission: 'node:group:view og_group_ref field'
  $permissions['node:group:view og_group_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'tester' => 'tester',
    ),
  );

  // Exported og permission: 'node:group:view og_roles_permissions field'
  $permissions['node:group:view og_roles_permissions field'] = array(
    'roles' => array(
      'tester' => 'tester',
    ),
  );

  // Exported og permission: 'node:group:view og_user_inheritance field'
  $permissions['node:group:view og_user_inheritance field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:view og_user_node field'
  $permissions['node:group:view og_user_node field'] = array(
    'roles' => array(
      'tester' => 'tester',
    ),
  );

  // Exported og permission: 'node:group:view og_user_permission_inheritance field'
  $permissions['node:group:view og_user_permission_inheritance field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:subgroup:add user'
  $permissions['node:subgroup:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:subgroup:administer group'
  $permissions['node:subgroup:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:subgroup:approve and deny subscription'
  $permissions['node:subgroup:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:subgroup:create basic_page content'
  $permissions['node:subgroup:create basic_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'tester' => 'tester',
    ),
  );

  // Exported og permission: 'node:subgroup:create group content'
  $permissions['node:subgroup:create group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:subgroup:create subgroup content'
  $permissions['node:subgroup:create subgroup content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:subgroup:delete any basic_page content'
  $permissions['node:subgroup:delete any basic_page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:subgroup:delete any group content'
  $permissions['node:subgroup:delete any group content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:subgroup:delete any subgroup content'
  $permissions['node:subgroup:delete any subgroup content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:subgroup:delete own basic_page content'
  $permissions['node:subgroup:delete own basic_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:subgroup:delete own group content'
  $permissions['node:subgroup:delete own group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:subgroup:delete own subgroup content'
  $permissions['node:subgroup:delete own subgroup content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:subgroup:manage members'
  $permissions['node:subgroup:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:subgroup:manage permissions'
  $permissions['node:subgroup:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:subgroup:manage roles'
  $permissions['node:subgroup:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:subgroup:subscribe'
  $permissions['node:subgroup:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:subgroup:subscribe without approval'
  $permissions['node:subgroup:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:subgroup:unsubscribe'
  $permissions['node:subgroup:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:subgroup:update any basic_page content'
  $permissions['node:subgroup:update any basic_page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:subgroup:update any group content'
  $permissions['node:subgroup:update any group content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:subgroup:update any subgroup content'
  $permissions['node:subgroup:update any subgroup content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:subgroup:update body field'
  $permissions['node:subgroup:update body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:subgroup:update group'
  $permissions['node:subgroup:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'tester' => 'tester',
    ),
  );

  // Exported og permission: 'node:subgroup:update group_group field'
  $permissions['node:subgroup:update group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:subgroup:update og_group_ref field'
  $permissions['node:subgroup:update og_group_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:subgroup:update og_roles_permissions field'
  $permissions['node:subgroup:update og_roles_permissions field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:subgroup:update og_user_inheritance field'
  $permissions['node:subgroup:update og_user_inheritance field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:subgroup:update og_user_node field'
  $permissions['node:subgroup:update og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:subgroup:update og_user_permission_inheritance field'
  $permissions['node:subgroup:update og_user_permission_inheritance field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:subgroup:update own basic_page content'
  $permissions['node:subgroup:update own basic_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:subgroup:update own group content'
  $permissions['node:subgroup:update own group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:subgroup:update own subgroup content'
  $permissions['node:subgroup:update own subgroup content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:subgroup:view body field'
  $permissions['node:subgroup:view body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
      'tester' => 'tester',
    ),
  );

  // Exported og permission: 'node:subgroup:view group_group field'
  $permissions['node:subgroup:view group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
      'tester' => 'tester',
    ),
  );

  // Exported og permission: 'node:subgroup:view og_group_ref field'
  $permissions['node:subgroup:view og_group_ref field'] = array(
    'roles' => array(
      'tester' => 'tester',
    ),
  );

  // Exported og permission: 'node:subgroup:view og_roles_permissions field'
  $permissions['node:subgroup:view og_roles_permissions field'] = array(
    'roles' => array(
      'tester' => 'tester',
    ),
  );

  // Exported og permission: 'node:subgroup:view og_user_inheritance field'
  $permissions['node:subgroup:view og_user_inheritance field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:subgroup:view og_user_node field'
  $permissions['node:subgroup:view og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
      'tester' => 'tester',
    ),
  );

  // Exported og permission: 'node:subgroup:view og_user_permission_inheritance field'
  $permissions['node:subgroup:view og_user_permission_inheritance field'] = array(
    'roles' => array(),
  );

  return $permissions;
}
