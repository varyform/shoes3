Shoes.app do
  event do |evt|
    # do not trigger new events here unless you can handle them
    case evt.type
    when :click 
      $stderr.puts "click handler called: #{evt.type} #{evt.button}, #{evt.x} #{evt.y} #{evt.modifiers}"
      evt.accept = @ck1.checked?
      if evt.object
        $stderr.puts "widget #{evt.object} at #{evt.type} #{evt.button} #{evt.x} #{evt.y} #{evt.width} #{evt.height}"
      end
    else
      evt.accept = true
    end
  end  
  
  stack do
    para "Click test 1"
    flow do 
      @ck1 = check checked: true; para "pass clicks to Shoes"
    end
    flow do 
      @btn1 = button "button 1", width: 75 do
        @eb.append "button 1 clicked\n"
      end
      @btn2 = button "button 2" do
        @eb.append "button 2 clicked\n"
      end
      click do
         @eb.append "flow click\n"
      end 
    end
    @eb = edit_box width: 500, height: 350
  end
  click do |btn, x, y, mods|
    @eb.append "app btn: #{btn} x: #{x} y: #{y} mods: #{mods}\n" 
  end
end