<?php

/**
 * @file
 * This file is inlcuded for homepage admin form.
 */

/**
 * Function to display events section in the form.
 */
function liscr_events_form($form) {
  $form['hp_events_description'] = array(
    '#type' => 'textfield',
    '#title' => t('Description'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_events_description', ''),
  );
  $form['hp_events_button_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Button text'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_events_button_text', ''),
  );
  $form['hp_events_button_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Button URL'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_events_button_link', ''),
  );
  return system_settings_form($form);
}
