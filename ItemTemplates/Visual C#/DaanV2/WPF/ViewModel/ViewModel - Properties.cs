using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace $rootnamespace$;

public partial class $fileinputname$ {
    ///DOLATER Add description<summary></summary>
    public String Text {
        get => this._Text;
        set { 
            this._Text = value;
            this.PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(this.Text)));
        }
    }
}