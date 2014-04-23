import kivy
kivy.require('1.8.0')

from kivy.uix.label import Label
from kivy.uix.boxlayout import BoxLayout
from kivy.uix.switch import Switch
from fieldlabel import FieldLabel
from helplabel import HelpLabel
from kivy.app import Builder
from utils import *
from kivy.properties import StringProperty

Builder.load_file('settingsview.kv')

class SettingsView(BoxLayout):
    help_text = StringProperty('')
    label_text = StringProperty('')
    
    def __init__(self, **kwargs):
        super(SettingsView, self).__init__(**kwargs)
        self.bind(help_text = self.on_help_text)
        self.bind(label_text = self.on_label_text)
        
        
    def on_help_text(self, instance, value):
        pass

    def on_label_text(self, instance, value):
        pass
        
        
class SettingsViewSwitch(SettingsView):
    def __init__(self, **kwargs):
#        switch = Switch()
#        kwargs['settings_ctrl'] =  switch
#        self.switch = switch
#        print("the argsss" + str(kwargs))
        super(SettingsViewSwitch, self).__init__(**kwargs)
        
    
        
        
