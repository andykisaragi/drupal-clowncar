<?php


/**
 * @file
 * Administration pages for clowncar settings.
 */

/**
 * Menu callback; Listing of all current clowncars.
 */
function clowncar_list() {
  $page = array();

  $clowncars = clowncar_get_clowncars();
  $page['image_style_list'] = array(
    '#markup' => theme('image_style_list', array('styles' => $clowncars)),
    '#attached' => array(
      'css' => array(drupal_get_path('module', 'image') . '/image.admin.css' => array()),
    ),
  );

  return $page;

}