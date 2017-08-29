<?php

/**
 * @file
 * This file is inlcuded for homepage admin form.
 */

/**
 * Function to display online library section in the form.
 */
function liscr_online_library($form) {
  $form['hp_library_description'] = array(
    '#type' => 'textfield',
    '#title' => t('Description'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_library_description', ''),
  );
  $form['hp_library_link'] = array(
    '#type' => 'textfield',
    '#title' => t('URL'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_library_link', ''),
  );
  $form['hp_library_icon'] = array(
    '#type' => 'managed_file',
    '#title' => t('Icon'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_library_icon', ''),
    '#upload_validators' => array(
      'file_validate_extensions' => array('gif png jpg jpeg svg'),
    ),
  );
  $form['hp_calculator_description'] = array(
    '#type' => 'textfield',
    '#title' => t('Description'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_calculator_description', ''),
  );
  $form['hp_calculator_link'] = array(
    '#type' => 'textfield',
    '#title' => t('URL'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_calculator_link', ''),
  );
  $form['hp_calculator_icon'] = array(
    '#type' => 'managed_file',
    '#title' => t('Icon'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_calculator_icon', ''),
    '#upload_validators' => array(
      'file_validate_extensions' => array('gif png jpg jpeg svg'),
    ),
  );
  return system_settings_form($form);
}
