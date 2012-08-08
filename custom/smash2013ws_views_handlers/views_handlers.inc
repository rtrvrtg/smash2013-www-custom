<?php

/**
 * Argument handler for a year dash month (YY-MM)
 */
class views_handler_argument_node_created_year_month_spaced extends views_handler_argument_node_created_year_month {
  function construct() {
    parent::construct();
    $this->format = 'F Y';
    $this->arg_format = 'Y-m';
    $this->formula = views_date_sql_format($this->arg_format, "***table***.$this->real_field");
  }
}

class views_handler_argument_node_updated_year_month_spaced extends views_handler_argument_node_updated_year_month {
  function construct() {
    parent::construct();
    $this->format = 'F Y';
    $this->arg_format = 'Y-m';
    $this->formula = views_date_sql_format($this->arg_format, "***table***.$this->real_field");
  }
}
