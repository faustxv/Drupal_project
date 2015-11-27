<?php
/**
 * @file
 * first_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function first_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_films:films.
  $menu_links['main-menu_films:films'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'films',
    'router_path' => 'films',
    'link_title' => 'Films',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_films:films',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_genre:genre.
  $menu_links['main-menu_genre:genre'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'genre',
    'router_path' => 'genre',
    'link_title' => 'Genre',
    'options' => array(
      'identifier' => 'main-menu_genre:genre',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_review:review.
  $menu_links['main-menu_review:review'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'review',
    'router_path' => 'review',
    'link_title' => 'Review',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_review:review',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_test-panels:node/9.
  $menu_links['main-menu_test-panels:node/9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Test Panels',
    'options' => array(
      'identifier' => 'main-menu_test-panels:node/9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Films');
  t('Genre');
  t('Home');
  t('Review');
  t('Test Panels');

  return $menu_links;
}
