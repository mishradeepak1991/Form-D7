<?php

/**
 * @file
 * This file is inlcuded for homepage admin form.
 */

/**
 * Function to display excellence section in the form.
 */
function liscr_excellence_form($form) {
  $form['hp_excellence_title_line1'] = array(
    '#type' => 'textfield',
    '#title' => t('Title Line1'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_excellence_title_line1', ''),
  );
  $form['hp_excellence_title_line2'] = array(
    '#type' => 'textfield',
    '#title' => t('Title Line2'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_excellence_title_line2', ''),
  );
  $form['hp_excellence_description'] = array(
    '#type' => 'textfield',
    '#title' => t('Description'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_excellence_description', ''),
  );
  $form['hp_excellence_video'] = array(
    '#type' => 'textfield',
    '#title' => t('Video URL'),
    '#required' => TRUE,
    '#default_value' => variable_get('hp_excellence_video', ''),
  );
  return system_settings_form($form);
}
