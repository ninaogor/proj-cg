<?php
/**
 * @file
 * cg_pages.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function cg_pages_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'one_action_continuous_good';
  $content->admin_title = 'One action continuous good';
  $content->admin_description = 'One action continuous good custom content pane.';
  $content->category = 'Homepage';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'One action, Continuous Good',
    'body' => '<div class="step-blocks">
    <div class="step-block" id="causes">
        <div class="bg-container">
            <img class="step-inner" src="sites/all/themes/cg_theme/images/circle-icon-check.jpg" />
        </div>
        <div>
            <p class="step-num">1</p>
        </div>
        <p class="step-text">Choose Causes to Support.</p>
    </div>
    <div class="step-block" id="amount">
        <div class="bg-container">
            <img class="step-inner" src="sites/all/themes/cg_theme/images/circle-icon-cal.jpg" />
        </div>
        <div>
            <p class="step-num">2</p>
            <p class="step-text">Set Amounts and Frequency</p>
        </div>
    </div>
    <div class="step-block" id="enjoy">
        <div class="bg-container">
            <img class="step-inner" src="sites/all/themes/cg_theme/images/circle-icon-heart.jpg" />
        </div>
        <div>
            <p class="step-num">3</p>
            <p class="step-text">Enjoy the continuous good you have done, and are doing.</p>
        </div>
    </div>
</div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['one_action_continuous_good'] = $content;

  return $export;
}
