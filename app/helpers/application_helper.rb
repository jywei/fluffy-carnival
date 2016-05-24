module ApplicationHelper

  def isHomePage
    "isHome" if current_page?(root_path)
  end
end
