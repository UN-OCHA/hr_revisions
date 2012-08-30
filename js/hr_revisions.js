(function ($) {

  Drupal.behaviors.hrRevisions = {
    attach: function (context, settings) {
      $('.hr-revisions-clear', context).click(function () {
        var text = '';
        // Replace textarea contents with some empty text.
        $(this).parent().prev().children().first().html(text);
      });
    }
  };

})(jQuery);