<?php
/**
 * @file
 * time_fun.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function time_fun_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Главное меню',
    'description' => 'Меню основных ссылок показывает главные разделы сайта. Обычно выводятся в виде горизонтальной полосы вверху страницы.',
  );
  // Exported menu: menu-events.
  $menus['menu-events'] = array(
    'menu_name' => 'menu-events',
    'title' => 'Меропрития',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Главное меню');
  t('Меню основных ссылок показывает главные разделы сайта. Обычно выводятся в виде горизонтальной полосы вверху страницы.');
  t('Меропрития');

  return $menus;
}
