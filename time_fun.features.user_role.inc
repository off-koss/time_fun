<?php
/**
 * @file
 * time_fun.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function time_fun_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: редактор.
  $roles['редактор'] = array(
    'name' => 'редактор',
    'weight' => 3,
  );

  return $roles;
}
