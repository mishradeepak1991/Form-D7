<?php

/**
 * @file
 * This file is inlcuded for homepage admin form.
 */

/**
 * Function to display whats new section in the form.
 */
function liscr_whats_new($form) {
  $form['hp_whatsnew_button_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Button text'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_whatsnew_button_text', ''),
  );
  $form['hp_whatsnew_button_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Button URL'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_whatsnew_button_link', ''),
  );
  return system_settings_form($form);
}
