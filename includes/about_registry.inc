<?php

/**
 * @file
 * This file is inlcuded for homepage admin form.
 */

/**
 * Function to display about registry section in the form.
 */
function liscr_about_registry($form) {
  $form['hp_about_description'] = array(
    '#type' => 'textfield',
    '#title' => t('Description'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_about_description', ''),
  );
  $form['hp_about_image'] = array(
    '#type' => 'managed_file',
    '#title' => t('Image'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_about_image', ''),
  );
  $form['hp_about_accomplishment1_line1'] = array(
    '#type' => 'textfield',
    '#title' => t('Accomplishment1 Line1'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_about_accomplishment1_line1', ''),
  );
  $form['hp_about_accomplishment1_line2'] = array(
    '#type' => 'textfield',
    '#title' => t('Accomplishment1 Line2'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_about_accomplishment1_line2', ''),
  );
  $form['hp_about_accomplishment2_line1'] = array(
    '#type' => 'textfield',
    '#title' => t('Accomplishment2 Line1'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_about_accomplishment2_line1', ''),
  );
  $form['hp_about_accomplishment2_line2'] = array(
    '#type' => 'textfield',
    '#title' => t('Accomplishment2 Line2'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_about_accomplishment2_line2', ''),
  );
  $form['hp_about_accomplishment3_line1'] = array(
    '#type' => 'textfield',
    '#title' => t('Accomplishment3 Line1'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_about_accomplishment3_line1', ''),
  );
  $form['hp_about_accomplishment3_line2'] = array(
    '#type' => 'textfield',
    '#title' => t('Accomplishment3 Line2'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_about_accomplishment3_line2', ''),
  );
  $form['hp_about_button1_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Button1 text'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_about_button1_text', ''),
  );
  $form['hp_about_button1_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Button1 URL'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_about_button1_link', ''),
  );
  $form['hp_about_button2_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Button2 text'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_about_button2_text', ''),
  );
  $form['hp_about_button2_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Button2 URL'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_about_button2_link', ''),
  );
  return system_settings_form($form);
}
