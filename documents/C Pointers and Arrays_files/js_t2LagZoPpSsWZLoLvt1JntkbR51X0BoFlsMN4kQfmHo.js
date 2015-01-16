(function ($) {
	$(document).ready(function() {
	
	
		var sw = document.body.clientWidth;   // sw = screen width
		
		if(sw >= 768) {
				if (!$("#sidebar").length) {
					$("#content").css({ "border" : "none", "width": "1118px"});
					$(".mainContent").css({"margin-left":"34px"});
					$(".mainTop").css({"margin-left":"250px"});
					$(".mainBottom").css({"margin-left":"354px"});

				}
				var windowState = 'large';     //Assumption initial screen size is large
		}
		else if (sw <= 767 && sw >= 481) {
			var windowState = 'medium';
			}
			else {
				var windowState = 'small';
				}
			

		/*------------------Height Determination main page--------------------*/
		/*
		var arr = new Array();
		$(".topics ul").each(function(index) {
			  arr[index] = $(this).children().length;
			});
		var length = Math.max.apply(Math,arr);	
		*/

                /*
		$(document).scroll(function() {
			if (window.pageYOffset > 130) {   // If vertical scrolling is greater than 130px
				$(".fixedNav").slideDown({
					duration: 200,
					easing: "linear" }); 
			}
			else {
					$(".fixedNav").slideUp(0); 
			}
		});	
                */
       
		 var url =  "http://www.programiz.com"+window.location.pathname;
		$("#sidebar a[href= '" + url + "']").addClass("currentPage");
		
		$('.topMenu .subMenu').addClass('invisible');     // Make all submenu invisible

		// Make all submenu of current chapter visible
		$('.topMenu .currentPage').parent().parent().addClass('visible').removeClass("invisible");
		// Adding indicator to sidebar menu  
		$('.invisible').prev().append('<span class="indicatorHide"></span>');
		$('.visible').prev().append('<span class="indicatorShow"></span>');

                
      		$('.topMenu h3').click(function(){	 
						
		        if ($(this).next().hasClass('invisible')) {
		         	$(this).next().addClass('visible').removeClass('invisible'); 
		         	 	
		    	}
		    	else if ($(this).next().hasClass('visible')) {
		         	$(this).next().addClass('invisible').removeClass('visible'); 
		         	 
		    	}
		    	
		    	$(".indicatorHide").removeClass();
			$(".indicatorShow").removeClass();
			$('.invisible').prev().append('<span class="indicatorHide"></span>');
			$('.visible').prev().append('<span class="indicatorShow"></span>');	


		});
    
               /*---------------------------------- Sidebar Menu ends here ---------------------------------*/		
		
		/*	
		$('.visible').prev().delegate("click",function(){
		   $(this).next().removeClass('visible').addClass('invisible');    

		   $(".indicatorHide").removeClass();
			$(".indicatorShow").removeClass();
			$('.invisible').prev().append('<span class="indicatorHide"></span>');
			$('.visible').prev().append('<span class="indicatorShow"></span>');
				
		});

		
		$('.invisible').prev().delegate("click", function(){	
		   $(this).next().removeClass('invisible').addClass('visible');  
             
		   $(".indicatorHide").removeClass();
			$(".indicatorShow").removeClass();
			$('.invisible').prev().append('<span class="indicatorHide"></span>');
			$('.visible').prev().append('<span class="indicatorShow"></span>');
			
		});
		*/

		$(window).resize(function() {
			var rsw = document.body.clientWidth;	
			if (rsw > 768 && windowState != 'large') {
				if (!$("#sidebar").length) {
					$("#content").css({ border:'none', width: '99%'});
				}
			if (rsw <= 767 && sw >= 481 && windowState != 'medium') {
				medMenu();
				}
			if (rsw <= 480) {
				smMenu();
			}		
		 }
		});
	});
	
})(jQuery);

	/* Functions to change navigation on menu depending upon the current screen size */	
	function smMenu() {
	
		windowState='small';
	}
	function medMenu() {
		               
		windowState='medium';
	}
	function lgMenu() {
		if (!$("#sidebar").length) {
		$("#content").css({ border:'none', width: '99%'});
		}
      		windowState='large';
	};
