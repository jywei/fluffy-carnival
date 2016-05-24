<%= render 'layouts/navbar' %>

<div class="mainpage">
  <%#= render 'layouts/iconbar' %>
  <!-- <div id="cube" class="" style="width:100vw;height:100vw;position:absolute;transform-style:preserve-3d;"> -->
    <!-- <figure class="front"> -->
      <div class="container-fluid" style="overflow:hidden;">
        <div class="carousel">
          <ul class="pane">

            <li>
              <div class="picture_holder bg1">
                <div style="position:relative;height:auto;text-align:center;top:; z-index: 1;">
                  <h2 class="slogan" style="line-height:28px;">ACCESSORIES</h2>
                  <h2 class="slogan" style="line-height:80px;">MAKE YOU</h2>
                  <h2 class="slogan bold" style="line-height:28px;">PERFECT</h2>
                </div>
              </div>
            </li>

            <li>
              <div class="picture_holder bg2">
                <div style="position:relative;height:auto;text-align:center;top:20%; z-index: 1;">
                  <h2 class="slogan">A</h2>
                  <h2 class="slogan" style="line-height:98px;">
                    <div class="slogan bold" style="display: inline;">STYLE</div> 
                    <div style="display: inline;">FOR</div>
                  </h2>
                  <h2 class="slogan">EVERY STORY</h2>
                </div>
              </div>
            </li>

            <li>
              <div class="picture_holder bg3">
                <div style="position:relative;height:auto;text-align:center;top:20%; z-index: 1;">
                  <h2 class="slogan" style="padding-top: 120px;">DARE TO</h2>
                  <h2 class="slogan bold" style="line-height: 98px;">HAND-CRAFT</h2>
                </div>
              </div>
            </li>

            <li>
              <div class="picture_holder bg4">
                <div style="position:relative;height:auto;text-align:center;top:20%; z-index: 1;">
                  <h2 class="slogan" style="padding-top: 120px;">EYES OF</h2>
                  <h2 class="slogan" style="line-height:98px;">
                    <div style="display: inline;">THE</div>
                    <div class="slogan bold" style="display: inline;">DIMOND</div>   
                  </h2>
                </div>
              </div>
            </li>

          </ul>
        </div>
      </div>
    <!-- </figure> -->
    <!-- <figure class="back" style="width:100%;height:100%;">
      <div class="container-fluid" style="overflow:hidden;background:grey;margin:10px;height:97vh;">
        <div class="carousel">
          <ul class="pane">
            <div style="background:url('assets/picture1.jpg');"></div>
          </ul>
        </div>
      </div>
    </figure>
    <figure class="right" style="width:100%;height:100%;">
      <div class="container-fluid" style="overflow:hidden;margin:10px;height:97vh;">
      <div style="background-image:url('/assets/picture1.jpg');width:100%;height:100%;"></div>
      </div>
    </figure>
    <figure class="left" style="width:100%;height:100%;">
      <div class="container-fluid" style="overflow:hidden;background:grey;margin:10px;height:97vh;">
        <div class="carousel">
          <ul class="pane">
            <div style="background:url('assets/picture1.jpg');"></div>
          </ul>
        </div>
      </div>
    </figure>
    <figure class="top"><div style="background:black;width:100%;height:100%;"></div></figure>
    <figure class="bottom"><div style="background:black;width:100%;height:100%;"></div></figure> -->
  <!-- </div> -->
</div>

<script type="text/javascript">
  $('#about_button').click(function(){
    $('#cube').removeClass('show-front show-back show-right show-left')
    $('#cube').addClass('show-left')
    var href = $(this).attr('href');
    setTimeout(function(){window.location = href}, 1000);
    return false;
  })
  $('#collections_button').click(function(){
    $('#cube').removeClass('show-front')
    $('#cube').removeClass('show-back')
    $('#cube').removeClass('show-right')
    $('#cube').removeClass('show-left')
    $('#cube').addClass('show-front')
  })
  $('#jewelry_button').click(function(){
    $('#cube').removeClass('show-front')
    $('#cube').removeClass('show-back')
    $('#cube').removeClass('show-right')
    $('#cube').removeClass('show-left')
    $('#cube').addClass('show-right')
  })
  $('#style_button').click(function(){
    $('#cube').removeClass('show-front')
    $('#cube').removeClass('show-back')
    $('#cube').removeClass('show-right')
    $('#cube').removeClass('show-left')
    $('#cube').addClass('show-back')
  })
</script>
