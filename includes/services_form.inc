<?php

/**
 * @file
 * This file is inlcuded for homepage admin form.
 */

/**
 * Function to display services form.
 */
function liscr_our_services($form) {
  $form['hp_services_description'] = array(
    '#type' => 'textfield',
    '#title' => t('Our Services description'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_services_description', ''),
  );
  $form['hp_services_service1_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Service1 Name'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_services_service1_name', ''),
  );
  $form['hp_services_service1_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Service1 URL'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_services_service1_link', ''),
  );
  $form['hp_services_service1_description'] = array(
    '#type' => 'textfield',
    '#title' => t('Service1 description'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_services_service1_description', ''),
  );
  $form['hp_services_service1_image'] = array(
    '#type' => 'managed_file',
    '#title' => t('Service1 image'),
    '#required' => TRUE,
    '#upload_validators' => array(
      'file_validate_size' => array(40 * 1024),
      'file_validate_is_image' => array(),
      'file_validate_extensions' => array('gif png jpg jpeg svg'),
    ),
    '#default_value' => variable_get('hp_services_service1_image', ''),
  );
  $form['hp_services_service1_icon'] = array(
    '#type' => 'managed_file',
    '#title' => t('Service1 icon'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_services_service1_icon', ''),
    '#upload_validators' => array(
      'file_validate_extensions' => array('gif png jpg jpeg svg'),
    ),
  );
  $form['hp_services_service2_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Service2 Name'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_services_service2_name', ''),
  );
  $form['hp_services_service2_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Service2 URL'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_services_service2_link', ''),
  );
  $form['hp_services_service2_description'] = array(
    '#type' => 'textfield',
    '#title' => t('Service2 description'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_services_service2_description', ''),
  );
  $form['hp_services_service2_image'] = array(
    '#type' => 'managed_file',
    '#title' => t('Service2 image'),
    '#required' => TRUE,
    '#upload_validators' => array(
      'file_validate_size' => array(40 * 1024),
      'file_validate_is_image' => array(),
      'file_validate_extensions' => array('gif png jpg jpeg svg'),
    ),
    '#default_value' => variable_get('hp_services_service2_image', ''),
  );
  $form['hp_services_service2_icon'] = array(
    '#type' => 'managed_file',
    '#title' => t('Service2 icon'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_services_service2_icon', ''),
    '#upload_validators' => array(
      'file_validate_extensions' => array('gif png jpg jpeg svg'),
    ),
  );
  $form['hp_services_service3_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Service3 Name'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_services_service3_name', ''),
  );
  $form['hp_services_service3_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Service3 URL'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_services_service3_link', ''),
  );
  $form['hp_services_service3_description'] = array(
    '#type' => 'textfield',
    '#title' => t('Service3 description'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_services_service3_description', ''),
  );
  $form['hp_services_service3_image'] = array(
    '#type' => 'managed_file',
    '#title' => t('Service3 image'),
    '#required' => TRUE,
    '#upload_validators' => array(
      'file_validate_size' => array(40 * 1024),
      'file_validate_is_image' => array(),
      'file_validate_extensions' => array('gif png jpg jpeg'),
    ),
    '#default_value' => variable_get('hp_services_service3_image', ''),
  );
  $form['hp_services_service3_icon'] = array(
    '#type' => 'managed_file',
    '#title' => t('Service3 icon'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_services_service3_icon', ''),
    '#upload_validators' => array(
      'file_validate_extensions' => array('gif png jpg jpeg svg'),
    ),
  );
  $form['hp_services_service4_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Service4 Name'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_services_service4_name', ''),
  );
  $form['hp_services_service4_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Service4 URL'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_services_service4_link', ''),
  );
  $form['hp_services_service4_description'] = array(
    '#type' => 'textfield',
    '#title' => t('Service4 description'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_services_service4_description', ''),
  );
  $form['hp_services_service4_image'] = array(
    '#type' => 'managed_file',
    '#title' => t('Service4 image'),
    '#required' => TRUE,
    '#upload_validators' => array(
      'file_validate_size' => array(40 * 1024),
      'file_validate_is_image' => array(),
      'file_validate_extensions' => array('gif png jpg jpeg'),
    ),
    '#default_value' => variable_get('hp_services_service4_image', ''),
  );
  $form['hp_services_service4_icon'] = array(
    '#type' => 'managed_file',
    '#title' => t('Service4 icon'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_services_service4_icon', ''),
    '#upload_validators' => array(
      'file_validate_extensions' => array('gif png jpg jpeg'),
    ),
  );
  return system_settings_form($form);
}
