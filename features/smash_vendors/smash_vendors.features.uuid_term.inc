<?php
/**
 * @file
 * smash_vendors.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function smash_vendors_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Exhibitors',
    'description' => 'Exhibitors at SMASH! run the gamut from books to DVDs to merchandise to… more merchandise! Check out the impressive list of who is attending this year:',
    'format' => 'filtered_html',
    'weight' => '1',
    'uuid' => '4fe1df73-c939-d3a4-7d13-79e9cb384fa8',
    'vocabulary_machine_name' => 'vendor_type',
    'path' => array(
      'alias' => 'vendor-type/exhibitors',
      'pathauto' => FALSE,
    ),
  );
  $terms[] = array(
    'name' => 'Clubs & Community Groups',
    'description' => 'How good are clubs? They’re full of stuff like people and… clubs. Seriously, they’re great.',
    'format' => 'filtered_html',
    'weight' => '2',
    'uuid' => '7a799b5d-97cd-a574-b96e-d1e1b52cb381',
    'vocabulary_machine_name' => 'vendor_type',
    'path' => array(
      'alias' => 'vendor-type/clubs-community-groups',
      'pathauto' => FALSE,
    ),
  );
  $terms[] = array(
    'name' => 'Artist Circle',
    'description' => 'The Artists’ Circle is our space for artists from all over Australia to come together to exhibit, sell and showcase their diverse artistic talents. It’s the place where artists and fans alike can celebrate their creative passions, and where one can also peruse the wonderful collection of hand-crafted merchandise, artworks and doujinshi on sale. Check out who’ll be showing up on the day:',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'b0bbdc39-1b14-2374-3db4-46abf7896d7b',
    'vocabulary_machine_name' => 'vendor_type',
    'path' => array(
      'alias' => 'vendor-type/artist-circle',
      'pathauto' => FALSE,
    ),
  );
  return $terms;
}
