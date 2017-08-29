<?php

/**
 * @file
 * This file is inlcuded for homepage admin form.
 */

/**
 * Function to display flagstate app section in the form.
 */
function liscr_flagstate_app($form) {
  $form['hp_flagstate_title_line1'] = array(
    '#type' => 'textfield',
    '#title' => t('Title Line1'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_flagstate_title_line1', ''),
  );
  $form['hp_flagstate_title_line2'] = array(
    '#type' => 'textfield',
    '#title' => t('Title Line2'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_flagstate_title_line2', ''),
  );
  $form['hp_flagstate_button_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Button text'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_flagstate_button_text', ''),
  );
  $form['hp_flagstate_button_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Button URL'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_flagstate_button_link', ''),
  );
  return system_settings_form($form);
}
