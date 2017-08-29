<?php

/**
 * @file
 * This file is inlcuded for homepage admin form.
 */

/**
 * Function to display homepage form.
 */
function liscr_homepage_form($form) {
  $form['hp_banner_main_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Main title'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_banner_main_title', ''),
  );
  $form['hp_banner_sub_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Sub title'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_banner_sub_title', ''),
  );
  $form['hp_banner_button_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Button text'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_banner_button_text', ''),
  );
  $form['hp_banner_button_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Button URL'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_banner_button_link', ''),
  );
  $form['hp_banner_image'] = array(
    '#type' => 'managed_file',
    '#title' => t('Desktop Banner image'),
    '#required' => TRUE,
    '#upload_validators' => array(
      'file_validate_size' => array(520 * 1024),
      'file_validate_is_image' => array(),
      'file_validate_image_resolution' => array(file_load(variable_get('hp_banner_image')), '1920x742'),
      'file_validate_image_aspect' => array('16:9'),
    ),
    '#default_value' => variable_get('hp_banner_image', ''),
  );
  $form['hp_mobile_banner_image'] = array(
    '#type' => 'managed_file',
    '#title' => t('Mobile Banner image'),
    '#required' => TRUE,
    '#upload_validators' => array(
      'file_validate_size' => array(500 * 1024),
      'file_validate_is_image' => array(),
      'file_validate_image_resolution' => array(file_load(variable_get('hp_mobile_banner_image')), '640x640'),
      'file_validate_image_aspect' => array('9:16'),
    ),
    '#default_value' => variable_get('hp_mobile_banner_image', ''),
  );
  return system_settings_form($form);
}
