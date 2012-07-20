<?php
/**
 * @file
 * roca_images.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function roca_images_image_default_styles() {
  $styles = array();

  // Exported image style: roca.
  $styles['roca'] = array(
    'name' => 'roca',
    'effects' => array(
      1 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => '200',
          'height' => '200',
          'anchor' => 'center-center',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
