require 'test_helper'

class CheckoutControllerTest < ActionController::TestCase
  test "should get address_new" do
    get :address_new
    assert_response :success
  end

  test "should get payment" do
    get :payment
    assert_response :success
  end

end
