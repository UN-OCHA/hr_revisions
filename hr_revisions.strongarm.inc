<?php
/**
 * @file
 * hr_revisions.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hr_revisions_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_admin_path_node';
  $strongarm->value = 0;
  $export['diff_admin_path_node'] = $strongarm;

  return $export;
}
